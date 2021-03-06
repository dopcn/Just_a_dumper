//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface CTTrainBuPiaoThreeStationView : UIView
{
    UIView *_circle1;
    UIView *_circle2;
    UIView *_circle3;
    UIView *_line1;
    UIView *_line2;
    UILabel *_labelGap1;
    UILabel *_labelGap2;
    NSLayoutConstraint *_gap1Width;
    NSLayoutConstraint *_gap2Width;
    UILabel *_labelStation1;
    UILabel *_labelStation2;
    UILabel *_labelStation3;
}

@property(retain, nonatomic) UILabel *labelStation3; // @synthesize labelStation3=_labelStation3;
@property(retain, nonatomic) UILabel *labelStation2; // @synthesize labelStation2=_labelStation2;
@property(retain, nonatomic) UILabel *labelStation1; // @synthesize labelStation1=_labelStation1;
@property(retain, nonatomic) NSLayoutConstraint *gap2Width; // @synthesize gap2Width=_gap2Width;
@property(retain, nonatomic) NSLayoutConstraint *gap1Width; // @synthesize gap1Width=_gap1Width;
@property(retain, nonatomic) UILabel *labelGap2; // @synthesize labelGap2=_labelGap2;
@property(retain, nonatomic) UILabel *labelGap1; // @synthesize labelGap1=_labelGap1;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) UIView *circle3; // @synthesize circle3=_circle3;
@property(retain, nonatomic) UIView *circle2; // @synthesize circle2=_circle2;
@property(retain, nonatomic) UIView *circle1; // @synthesize circle1=_circle1;
- (void).cxx_destruct;
- (void)setupContentWithInfo:(id)arg1;
- (void)awakeFromNib;

@end

