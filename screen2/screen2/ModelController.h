//
//  ModelController.h
//  screen2
//
//  Created by Siobhan Schnittger on 03/10/2013.
//  Copyright (c) 2013 Siobhan Schnittger. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
