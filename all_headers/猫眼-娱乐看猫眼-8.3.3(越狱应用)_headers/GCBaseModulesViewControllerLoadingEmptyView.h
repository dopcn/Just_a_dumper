//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GCBaseModulesViewControllerLoadingEmptyViewProtocol-Protocol.h"

@class NSString, RACCommand, UIImage;
@protocol GCBaseModulesViewControllerLoadingEmptyViewProtocol;

@interface GCBaseModulesViewControllerLoadingEmptyView : UIView <GCBaseModulesViewControllerLoadingEmptyViewProtocol>
{
    RACCommand *_commandForTap;
    UIImage *_imageForEmpty;
    NSString *_textForTitle;
    UIView<GCBaseModulesViewControllerLoadingEmptyViewProtocol> *_emptySubView;
}

@property(retain, nonatomic) UIView<GCBaseModulesViewControllerLoadingEmptyViewProtocol> *emptySubView; // @synthesize emptySubView=_emptySubView;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *textForTitle; // @synthesize textForTitle=_textForTitle;
@property(retain, nonatomic) UIImage *imageForEmpty; // @synthesize imageForEmpty=_imageForEmpty;
@property(retain, nonatomic) RACCommand *commandForTap; // @synthesize commandForTap=_commandForTap;
- (void)initialViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

