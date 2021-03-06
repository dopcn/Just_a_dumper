//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol JobDetailAnnotationViewDelegate;

@interface JobDetailAnnotationView : UIView
{
    id <JobDetailAnnotationViewDelegate> _delegate;
    UIImageView *_bgView;
    UILabel *_companyLabel;
    UILabel *_addressLabel;
    UIButton *_navigationButton;
}

@property(retain, nonatomic) UIButton *navigationButton; // @synthesize navigationButton=_navigationButton;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *companyLabel; // @synthesize companyLabel=_companyLabel;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <JobDetailAnnotationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)navigationButtonClick:(id)arg1;
- (void)setJobDetail:(id)arg1;

@end

