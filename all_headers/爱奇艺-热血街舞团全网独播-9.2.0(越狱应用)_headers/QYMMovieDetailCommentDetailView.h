//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol QYMMovieDetailCommentDetailViewDelegate;

@interface QYMMovieDetailCommentDetailView : UIView
{
    UIImageView *_newsPic;
    UILabel *_title;
    UILabel *_detailDesc;
    UIView *_longCommentContainer;
    UIView *_commentGradeView;
    UIImageView *_commentGradeImage;
    UILabel *_commentGradeLabel;
    UILabel *_commentInfoLabel;
    UIView *_divideLine;
    id <QYMMovieDetailCommentDetailViewDelegate> _delegate;
    NSString *_detailUrl;
}

@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) __weak id <QYMMovieDetailCommentDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutScoreString:(id)arg1;
- (id)commentStringWithScore:(double)arg1;
- (id)commentImageWithScore:(double)arg1;
- (void)layoutCommentDescString:(id)arg1;
- (void)layoutCommentDetailView:(id)arg1 withInfoViewHeight:(double)arg2;
- (void)commentViewTapAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

