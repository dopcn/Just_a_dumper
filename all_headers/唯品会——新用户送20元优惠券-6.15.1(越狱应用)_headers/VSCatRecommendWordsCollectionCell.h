//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, UIView, VSCatRecommendWordCellDataModel, YYLabel;

@interface VSCatRecommendWordsCollectionCell : UICollectionViewCell
{
    VSCatRecommendWordCellDataModel *_recommendMdl;
    NSArray *_wordsArr;
    UIView *_bgView;
    YYLabel *_yyLabel;
    UIView *_lineView;
}

+ (struct CGSize)sizeWithRecommendDataMdl:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YYLabel *yyLabel; // @synthesize yyLabel=_yyLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSArray *wordsArr; // @synthesize wordsArr=_wordsArr;
@property(retain, nonatomic) VSCatRecommendWordCellDataModel *recommendMdl; // @synthesize recommendMdl=_recommendMdl;
- (void).cxx_destruct;
- (void)handleWordsSelectWithString:(long long)arg1;
- (void)recommendTagBtnClick:(id)arg1;
- (void)removeAllOldButton;
- (void)setupView;
- (void)updateWithRecommendDataMdl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

