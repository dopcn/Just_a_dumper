//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QYUCardEventV3, UITableViewCell, UIViewController;

@interface QYCardPopupContext : NSObject
{
    UIViewController *_viewController;
    UITableViewCell *_cell;
    QYUCardEventV3 *_event;
}

@property(retain, nonatomic) QYUCardEventV3 *event; // @synthesize event=_event;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

@end

