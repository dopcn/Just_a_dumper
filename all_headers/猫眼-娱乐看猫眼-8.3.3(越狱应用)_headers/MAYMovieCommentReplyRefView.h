//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MAYMovieCommentReply, UIImageView, UILabel;

@interface MAYMovieCommentReplyRefView : UIControl
{
    _Bool _isExpend;
    MAYMovieCommentReply *_commentReplyRef;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    double _detailLabelHeight;
    UIImageView *_bgImageV;
    UIImageView *_indicatorImageView;
}

@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UIImageView *bgImageV; // @synthesize bgImageV=_bgImageV;
@property(nonatomic) double detailLabelHeight; // @synthesize detailLabelHeight=_detailLabelHeight;
@property(nonatomic) _Bool isExpend; // @synthesize isExpend=_isExpend;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MAYMovieCommentReply *commentReplyRef; // @synthesize commentReplyRef=_commentReplyRef;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool indicatorHidden;
- (void)layoutSubviews;
- (void)commonInitialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

