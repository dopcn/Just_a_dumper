//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIImage;

@interface WTSStarRater : UIControl
{
    _Bool _enableHalfStar;
    double _rating;
    double _halfStarThreshold;
    double _fullStarThreshold;
    double _touchOffset;
    UIImage *_highlightFullStarImage;
    UIImage *_normalFullStarImage;
    UIImage *_halfStarImage;
    double _minRatingAllowed;
    double _maxRatingAllowed;
    double _gapBetweenStars;
    unsigned long long _starNumber;
    NSMutableArray *_starSubLayers;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) NSMutableArray *starSubLayers; // @synthesize starSubLayers=_starSubLayers;
@property(readonly, nonatomic) unsigned long long starNumber; // @synthesize starNumber=_starNumber;
@property(nonatomic) double gapBetweenStars; // @synthesize gapBetweenStars=_gapBetweenStars;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double maxRatingAllowed; // @synthesize maxRatingAllowed=_maxRatingAllowed;
@property(nonatomic) double minRatingAllowed; // @synthesize minRatingAllowed=_minRatingAllowed;
@property(retain, nonatomic) UIImage *halfStarImage; // @synthesize halfStarImage=_halfStarImage;
@property(retain, nonatomic) UIImage *normalFullStarImage; // @synthesize normalFullStarImage=_normalFullStarImage;
@property(retain, nonatomic) UIImage *highlightFullStarImage; // @synthesize highlightFullStarImage=_highlightFullStarImage;
@property(nonatomic) double touchOffset; // @synthesize touchOffset=_touchOffset;
@property(nonatomic) double fullStarThreshold; // @synthesize fullStarThreshold=_fullStarThreshold;
@property(nonatomic) double halfStarThreshold; // @synthesize halfStarThreshold=_halfStarThreshold;
@property(nonatomic) _Bool enableHalfStar; // @synthesize enableHalfStar=_enableHalfStar;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (void)p_updateStarUI;
- (double)p_translateRating:(double)arg1;
- (void)p_setRating:(double)arg1;
- (void)p_handlerTouchPoint:(struct CGPoint)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setupStarUI;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 starNumber:(unsigned long long)arg2;
- (void)commonInit;

@end

