//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKCommonBaseModule.h"

@class TPKMLPBasicInfoModuleViewModel, TVLTicketReserveNoticeViewController;

@interface TPKMLPBasicInfoModule : TPKCommonBaseModule
{
    TVLTicketReserveNoticeViewController *_reserveNoticeVC;
    TPKMLPBasicInfoModuleViewModel *_basicViewModel;
    CDUnknownBlockType _didClickExpandButton;
}

@property(copy, nonatomic) CDUnknownBlockType didClickExpandButton; // @synthesize didClickExpandButton=_didClickExpandButton;
@property(retain, nonatomic) TPKMLPBasicInfoModuleViewModel *basicViewModel; // @synthesize basicViewModel=_basicViewModel;
@property(retain, nonatomic) TVLTicketReserveNoticeViewController *reserveNoticeVC; // @synthesize reserveNoticeVC=_reserveNoticeVC;
- (void).cxx_destruct;
- (void)setupModule;

@end

