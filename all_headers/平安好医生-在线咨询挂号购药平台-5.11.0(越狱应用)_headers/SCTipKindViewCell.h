//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface SCTipKindViewCell : UICollectionViewCell
{
    UILabel *_kindLabel;
    UILabel *_contentLabel;
    UILabel *_numLabel;
    UIView *_bottomLineView;
    struct UIEdgeInsets _seperatorInsets;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *kindLabel; // @synthesize kindLabel=_kindLabel;
@property(nonatomic) struct UIEdgeInsets seperatorInsets; // @synthesize seperatorInsets=_seperatorInsets;
- (void).cxx_destruct;
- (void)upDateCellFrame;
- (void)configCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

