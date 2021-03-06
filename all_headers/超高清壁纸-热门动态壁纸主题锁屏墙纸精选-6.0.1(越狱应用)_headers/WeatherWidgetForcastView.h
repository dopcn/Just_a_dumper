//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WeatherWidgetForcastView : UIView
{
    UILabel *_dateLbl;
    UIImageView *_weatherIconImageView;
    UILabel *_weatherDescLbl;
    UILabel *_weatherTempLbl;
}

@property(retain, nonatomic) UILabel *weatherTempLbl; // @synthesize weatherTempLbl=_weatherTempLbl;
@property(retain, nonatomic) UILabel *weatherDescLbl; // @synthesize weatherDescLbl=_weatherDescLbl;
@property(retain, nonatomic) UIImageView *weatherIconImageView; // @synthesize weatherIconImageView=_weatherIconImageView;
@property(retain, nonatomic) UILabel *dateLbl; // @synthesize dateLbl=_dateLbl;
- (void).cxx_destruct;
- (void)setupDataWithDictionary:(id)arg1;
- (void)setupView;
- (id)init;

@end

