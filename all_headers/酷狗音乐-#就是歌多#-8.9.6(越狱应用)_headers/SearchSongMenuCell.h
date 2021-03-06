//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGThemeImageView, KGThemeLabel, SearchSpecialInfo, UIImage;

@interface SearchSongMenuCell : MusicBaseCell
{
    UIImage *_holerImage;
    SearchSpecialInfo *_specialItem;
    KGThemeImageView *_coverImg;
    KGThemeLabel *_menuNameLabel;
    KGThemeLabel *_secondLineLabelOne;
    KGThemeLabel *_secondLineLabelTwo;
}

@property(retain, nonatomic) KGThemeLabel *secondLineLabelTwo; // @synthesize secondLineLabelTwo=_secondLineLabelTwo;
@property(retain, nonatomic) KGThemeLabel *secondLineLabelOne; // @synthesize secondLineLabelOne=_secondLineLabelOne;
@property(retain, nonatomic) KGThemeLabel *menuNameLabel; // @synthesize menuNameLabel=_menuNameLabel;
@property(retain, nonatomic) KGThemeImageView *coverImg; // @synthesize coverImg=_coverImg;
@property(retain, nonatomic) SearchSpecialInfo *specialItem; // @synthesize specialItem=_specialItem;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)exchangeNum:(long long)arg1;
- (id)makePlayerholderImage;
- (id)getSpecialTitleWith:(id)arg1;
- (void)adjustSecondLineContent;
- (void)configView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

