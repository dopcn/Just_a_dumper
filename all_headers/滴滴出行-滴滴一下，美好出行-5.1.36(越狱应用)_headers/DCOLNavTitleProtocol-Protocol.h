//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCComponentProtocol-Protocol.h"

@class DCOLNavTitleViewModel;
@protocol DCOLNavTitleDelegate;

@protocol DCOLNavTitleProtocol <DCComponentProtocol>
@property(nonatomic) __weak id <DCOLNavTitleDelegate> delegate;
- (void)close;
- (void)open;
- (void)setupViewModel:(DCOLNavTitleViewModel *)arg1;
@end

