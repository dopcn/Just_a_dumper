//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BMVioPartnerView;

@interface BMVioTBFooterView : UIView
{
    BMVioPartnerView *_partnerView;
    UIView *_topView;
}

@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) BMVioPartnerView *partnerView; // @synthesize partnerView=_partnerView;
- (void).cxx_destruct;
- (void)setShowHeight:(double)arg1;
- (void)initSetup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

