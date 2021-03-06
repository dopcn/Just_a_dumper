//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewCell.h"

@class MAYMovie, MAYMovieWishNumViewModel, UILabel, UIView;

@interface MAYMovieTitleViewCell : MTTableViewCell
{
    MAYMovie *_movie;
    UILabel *_nameLabel;
    UILabel *_scoreLabel;
    UILabel *_unitLabel;
    UILabel *_wishNumberLabel;
    UILabel *_wantToSeeLabel;
    UILabel *_zeroScoreLabel;
    UILabel *_durationLabel;
    UIView *_separatorLineView;
    MAYMovieWishNumViewModel *_wishNumViewModel;
}

@property(retain, nonatomic) MAYMovieWishNumViewModel *wishNumViewModel; // @synthesize wishNumViewModel=_wishNumViewModel;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *zeroScoreLabel; // @synthesize zeroScoreLabel=_zeroScoreLabel;
@property(retain, nonatomic) UILabel *wantToSeeLabel; // @synthesize wantToSeeLabel=_wantToSeeLabel;
@property(retain, nonatomic) UILabel *wishNumberLabel; // @synthesize wishNumberLabel=_wishNumberLabel;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MAYMovie *movie; // @synthesize movie=_movie;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)commonInitialize;
- (void)setItem:(id)arg1;
- (id)init;

@end

