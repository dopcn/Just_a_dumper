//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HomePageChannelFloorCell-Protocol.h"
#import "HomePageChannelFloorFooter-Protocol.h"
#import "HomePageChannelValidation-Protocol.h"

@class HomePageChannelAction, HomePageChannelJumpModel, NSString, UIColor;

@interface HomePageChannelFBottomModel : NSObject <HomePageChannelValidation, HomePageChannelFloorCell, HomePageChannelFloorFooter>
{
    NSString *_title;
    HomePageChannelJumpModel *_jump;
}

@property(retain, nonatomic) HomePageChannelJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) HomePageChannelAction *floorFooterAction;
@property(readonly, nonatomic) NSString *floorFooterTitle;
@property(readonly, nonatomic) NSString *floorCellIdentifier;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

