//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FlightListTitleView : UIView
{
    UILabel *_depCityLabel;
    UILabel *_arrCityLabel;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *arrCityLabel; // @synthesize arrCityLabel=_arrCityLabel;
@property(retain, nonatomic) UILabel *depCityLabel; // @synthesize depCityLabel=_depCityLabel;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

