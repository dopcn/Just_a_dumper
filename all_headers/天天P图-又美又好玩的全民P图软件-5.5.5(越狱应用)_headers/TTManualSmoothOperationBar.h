//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTManualOperationBar.h"

@class BottomBarButton;

@interface TTManualSmoothOperationBar : TTManualOperationBar
{
    BottomBarButton *_lightSmothButton;
    BottomBarButton *_hightSmothButton;
    BottomBarButton *_eraseButton;
}

@property(nonatomic) __weak BottomBarButton *eraseButton; // @synthesize eraseButton=_eraseButton;
@property(nonatomic) __weak BottomBarButton *hightSmothButton; // @synthesize hightSmothButton=_hightSmothButton;
@property(nonatomic) __weak BottomBarButton *lightSmothButton; // @synthesize lightSmothButton=_lightSmothButton;
- (void).cxx_destruct;
- (void)localize;

@end

