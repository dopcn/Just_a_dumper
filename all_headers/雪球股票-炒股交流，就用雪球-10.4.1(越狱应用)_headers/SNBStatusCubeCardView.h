//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SNBStatusCardViewProtocol-Protocol.h"

@class NSString, SNBCubeDiscoveryListCell;
@protocol SNBCubeDiscoveryCellModel;

@interface SNBStatusCubeCardView : UIView <SNBStatusCardViewProtocol>
{
    NSString *_symobl;
    id <SNBCubeDiscoveryCellModel> _model;
    CDUnknownBlockType _didTapFollowButton;
    CDUnknownBlockType _didTapOrderButton;
    CDUnknownBlockType _didTapCube;
    SNBCubeDiscoveryListCell *_cell;
}

+ (double)heightForData:(id)arg1;
@property(retain, nonatomic) SNBCubeDiscoveryListCell *cell; // @synthesize cell=_cell;
@property(copy, nonatomic) CDUnknownBlockType didTapCube; // @synthesize didTapCube=_didTapCube;
@property(copy, nonatomic) CDUnknownBlockType didTapOrderButton; // @synthesize didTapOrderButton=_didTapOrderButton;
@property(copy, nonatomic) CDUnknownBlockType didTapFollowButton; // @synthesize didTapFollowButton=_didTapFollowButton;
@property(nonatomic) __weak id <SNBCubeDiscoveryCellModel> model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *symobl; // @synthesize symobl=_symobl;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)tapCell;
- (void)_snb_didTapActionButton;
- (void)updateTheme:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

