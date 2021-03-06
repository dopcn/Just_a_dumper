//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class PCModuleInfo, PPImageView, UILabel;

@interface PHUserCenterOtherCoverButton : UIButton
{
    PPImageView *_otherIconImageView;
    UILabel *_otherTitleLabel;
    PCModuleInfo *_coverData;
}

@property(retain, nonatomic) PCModuleInfo *coverData; // @synthesize coverData=_coverData;
@property(nonatomic) __weak UILabel *otherTitleLabel; // @synthesize otherTitleLabel=_otherTitleLabel;
@property(nonatomic) __weak PPImageView *otherIconImageView; // @synthesize otherIconImageView=_otherIconImageView;
- (void).cxx_destruct;
- (id)defaultImageWithModuleInfo:(id)arg1;
- (void)refreshData;
- (void)setHighlighted:(_Bool)arg1;
- (void)awakeFromNib;

@end

