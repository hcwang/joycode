//
//  SampleModelController.h
//  Test
//
//  Created by HongChao Wang on 11-10-28.
//  Copyright (c) 2011年 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SampleDataViewController;

@interface SampleModelController : NSObject <UIPageViewControllerDataSource>
- (SampleDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(SampleDataViewController *)viewController;
@end
