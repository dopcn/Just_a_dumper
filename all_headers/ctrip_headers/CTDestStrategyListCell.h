//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CTDestDownLoadModel, CTDestStrategyDownLoadStateView, CTImageView, UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol CTDestStrategyDownControlDelegate;

@interface CTDestStrategyListCell : UITableViewCell
{
    CTDestDownLoadModel *_downLoadModel;
    id <CTDestStrategyDownControlDelegate> _delegate;
    CTImageView *_strategyImageView;
    UILabel *_strateNameLabel;
    UILabel *_eNameLabel;
    UILabel *_favoritesLabel;
    UILabel *_sizeLabel;
    UIImageView *_isNewStrategyImageView;
    UIView *_bottomLineView;
    CTDestStrategyDownLoadStateView *_statusView;
    UIView *_deleteView;
    UIView *_deleteSplitLine;
    UIButton *_deleteBtn;
    UIButton *_downLoadBtn;
    UIImage *_defaultImage;
}

@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIButton *downLoadBtn; // @synthesize downLoadBtn=_downLoadBtn;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIView *deleteSplitLine; // @synthesize deleteSplitLine=_deleteSplitLine;
@property(retain, nonatomic) UIView *deleteView; // @synthesize deleteView=_deleteView;
@property(retain, nonatomic) CTDestStrategyDownLoadStateView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *isNewStrategyImageView; // @synthesize isNewStrategyImageView=_isNewStrategyImageView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *favoritesLabel; // @synthesize favoritesLabel=_favoritesLabel;
@property(retain, nonatomic) UILabel *eNameLabel; // @synthesize eNameLabel=_eNameLabel;
@property(retain, nonatomic) UILabel *strateNameLabel; // @synthesize strateNameLabel=_strateNameLabel;
@property(retain, nonatomic) CTImageView *strategyImageView; // @synthesize strategyImageView=_strategyImageView;
@property(nonatomic) __weak id <CTDestStrategyDownControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTDestDownLoadModel *downLoadModel; // @synthesize downLoadModel=_downLoadModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)pressDownLoadBtn:(id)arg1;
- (id)formatDateToString:(double)arg1;
- (void)deleteBook:(id)arg1;
- (void)changeProgress:(id)arg1;
- (void)changeStatusViewBy:(id)arg1;
- (void)fillCellContentWith:(id)arg1 isDownLoadedCell:(_Bool)arg2 showDelBtn:(_Bool)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

