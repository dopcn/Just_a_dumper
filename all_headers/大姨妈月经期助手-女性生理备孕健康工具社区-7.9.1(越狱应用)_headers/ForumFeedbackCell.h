//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FDUIImageView, MarginLineView, NSString, UIImageView, UILabel, UIView;

@interface ForumFeedbackCell : UITableViewCell
{
    _Bool _isFirstRow;
    _Bool _isLaststRow;
    NSString *_userIconUrl;
    NSString *_userName;
    NSString *_contentString;
    NSString *_goodsImageUrl;
    FDUIImageView *_userIconView;
    UILabel *_userNameLabel;
    UILabel *_contentLabel;
    UIImageView *_goodsImageView;
    MarginLineView *_middelLineView;
    UIView *_lineView;
}

@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak MarginLineView *middelLineView; // @synthesize middelLineView=_middelLineView;
@property(nonatomic) __weak UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak FDUIImageView *userIconView; // @synthesize userIconView=_userIconView;
@property(nonatomic) _Bool isLaststRow; // @synthesize isLaststRow=_isLaststRow;
@property(nonatomic) _Bool isFirstRow; // @synthesize isFirstRow=_isFirstRow;
@property(copy, nonatomic) NSString *goodsImageUrl; // @synthesize goodsImageUrl=_goodsImageUrl;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userIconUrl; // @synthesize userIconUrl=_userIconUrl;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

