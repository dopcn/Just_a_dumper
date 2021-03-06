//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SLLiveRoomRedPacketView : UIView
{
    CDUnknownBlockType _didClickedRedPacketView;
    CDUnknownBlockType _showRedEggViewHandler;
    NSMutableArray *_iconImageViews;
}

@property(retain, nonatomic) NSMutableArray *iconImageViews; // @synthesize iconImageViews=_iconImageViews;
@property(copy, nonatomic) CDUnknownBlockType showRedEggViewHandler; // @synthesize showRedEggViewHandler=_showRedEggViewHandler;
@property(copy, nonatomic) CDUnknownBlockType didClickedRedPacketView; // @synthesize didClickedRedPacketView=_didClickedRedPacketView;
- (void).cxx_destruct;
- (long long)currentRedPackets;
- (void)showRedEggView;
- (void)showRedPacketWithRoomId:(id)arg1;
- (void)removeAllRedPacket;
- (void)redPacketClicked:(id)arg1;
- (void)addRedPacketView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

