//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface BDNCouponHomeGuessYouLikeMultiMovieSlideCell : UICollectionViewCell
{
    UIImageView *_movieImage;
    UIView *_movieInfoView;
    UIView *_starContentView;
    UIImageView *_hightlightStarImage;
    UILabel *_movieName;
    UILabel *_scoreLabel;
    UILabel *_moreLabel;
}

@property(copy, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(copy, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(copy, nonatomic) UILabel *movieName; // @synthesize movieName=_movieName;
@property(copy, nonatomic) UIImageView *hightlightStarImage; // @synthesize hightlightStarImage=_hightlightStarImage;
@property(copy, nonatomic) UIView *starContentView; // @synthesize starContentView=_starContentView;
@property(copy, nonatomic) UIView *movieInfoView; // @synthesize movieInfoView=_movieInfoView;
@property(copy, nonatomic) UIImageView *movieImage; // @synthesize movieImage=_movieImage;
- (void).cxx_destruct;
- (void)showMoreCell;
- (void)updateData:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

