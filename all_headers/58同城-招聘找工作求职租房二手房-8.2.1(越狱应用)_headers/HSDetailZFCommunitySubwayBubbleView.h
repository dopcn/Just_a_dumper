//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HSDetailZFCommunityModel;

@interface HSDetailZFCommunitySubwayBubbleView : UIView
{
    HSDetailZFCommunityModel *_model;
    UIView *_subwayDistanceView;
}

@property(retain, nonatomic) UIView *subwayDistanceView; // @synthesize subwayDistanceView=_subwayDistanceView;
@property(retain, nonatomic) HSDetailZFCommunityModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

@end

