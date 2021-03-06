//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DGDetailEtaView, DGEtaViewModel, UIImageView;

@interface DGBusCalloutView : UIView
{
    DGEtaViewModel *_etaViewModel;
    UIImageView *_leftBgImageView;
    UIImageView *_rightBgImageView;
    DGDetailEtaView *_etaView;
}

@property(retain, nonatomic) DGDetailEtaView *etaView; // @synthesize etaView=_etaView;
@property(retain, nonatomic) UIImageView *rightBgImageView; // @synthesize rightBgImageView=_rightBgImageView;
@property(retain, nonatomic) UIImageView *leftBgImageView; // @synthesize leftBgImageView=_leftBgImageView;
@property(retain, nonatomic) DGEtaViewModel *etaViewModel; // @synthesize etaViewModel=_etaViewModel;
- (void).cxx_destruct;
- (void)configView;
- (void)configConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

