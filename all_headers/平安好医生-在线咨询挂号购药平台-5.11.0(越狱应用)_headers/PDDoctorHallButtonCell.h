//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton;

@interface PDDoctorHallButtonCell : UICollectionViewCell
{
    CDUnknownBlockType _clickBlock;
    UIButton *_leftButton;
    UIButton *_rightButtonTop;
    UIButton *_rightButtonBottom;
}

@property(retain, nonatomic) UIButton *rightButtonBottom; // @synthesize rightButtonBottom=_rightButtonBottom;
@property(retain, nonatomic) UIButton *rightButtonTop; // @synthesize rightButtonTop=_rightButtonTop;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)btnSleep;
- (void)btnAction:(id)arg1;
- (void)addLineAtCellBottom;
- (void)fillWithButtonsInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

