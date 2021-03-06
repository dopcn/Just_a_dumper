//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QLImageLoadDelegate-Protocol.h"

@class NSIndexPath, NSString, QLSImageView, UIButton, UIImageView, UIView;

@interface QLMPClarityCell : UITableViewCell <QLImageLoadDelegate>
{
    NSIndexPath *_indexPath;
    CDUnknownBlockType _clarityButtonBlock;
    UIView *_containButtonView;
    UIButton *_selectedButton;
    UIImageView *_selectedButtonView;
    double _maxWidth;
    UIButton *_promotBtn;
    QLSImageView *_promotImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) QLSImageView *promotImageView; // @synthesize promotImageView=_promotImageView;
@property(retain, nonatomic) UIButton *promotBtn; // @synthesize promotBtn=_promotBtn;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIImageView *selectedButtonView; // @synthesize selectedButtonView=_selectedButtonView;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) UIView *containButtonView; // @synthesize containButtonView=_containButtonView;
@property(copy, nonatomic) CDUnknownBlockType clarityButtonBlock; // @synthesize clarityButtonBlock=_clarityButtonBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2 imageView:(id)arg3;
- (void)setSeparatorShown:(_Bool)arg1;
- (void)setTitleSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setClarityButtonTitle:(id)arg1;
- (void)selectClarityAction:(id)arg1;
- (void)configVipPromotPosition;
- (void)showVIPPromot:(_Bool)arg1 promotImageURL:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

