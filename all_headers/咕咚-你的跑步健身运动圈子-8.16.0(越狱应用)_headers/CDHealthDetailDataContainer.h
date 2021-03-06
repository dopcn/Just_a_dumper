//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface CDHealthDetailDataContainer : UIView
{
    long long _healthType;
    id _detailData;
    UIView *_container1;
    UIView *_container2;
    UIView *_container3;
    UIView *_container4;
    UIView *_container5;
    UIView *_container6;
    UILabel *_titleLabel1;
    UILabel *_contentLabel1;
    UILabel *_titleLabel2;
    UILabel *_contentLabel2;
    UILabel *_titleLabel3;
    UILabel *_contentLabel3;
    UILabel *_titleLabel4;
    UILabel *_contentLabel4;
    UILabel *_titleLabel5;
    UILabel *_contentLabel5;
}

@property(nonatomic) __weak UILabel *contentLabel5; // @synthesize contentLabel5=_contentLabel5;
@property(nonatomic) __weak UILabel *titleLabel5; // @synthesize titleLabel5=_titleLabel5;
@property(nonatomic) __weak UILabel *contentLabel4; // @synthesize contentLabel4=_contentLabel4;
@property(nonatomic) __weak UILabel *titleLabel4; // @synthesize titleLabel4=_titleLabel4;
@property(nonatomic) __weak UILabel *contentLabel3; // @synthesize contentLabel3=_contentLabel3;
@property(nonatomic) __weak UILabel *titleLabel3; // @synthesize titleLabel3=_titleLabel3;
@property(nonatomic) __weak UILabel *contentLabel2; // @synthesize contentLabel2=_contentLabel2;
@property(nonatomic) __weak UILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(nonatomic) __weak UILabel *contentLabel1; // @synthesize contentLabel1=_contentLabel1;
@property(nonatomic) __weak UILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(nonatomic) __weak UIView *container6; // @synthesize container6=_container6;
@property(nonatomic) __weak UIView *container5; // @synthesize container5=_container5;
@property(nonatomic) __weak UIView *container4; // @synthesize container4=_container4;
@property(nonatomic) __weak UIView *container3; // @synthesize container3=_container3;
@property(nonatomic) __weak UIView *container2; // @synthesize container2=_container2;
@property(nonatomic) __weak UIView *container1; // @synthesize container1=_container1;
@property(retain, nonatomic) id detailData; // @synthesize detailData=_detailData;
@property(nonatomic) long long healthType; // @synthesize healthType=_healthType;
- (void).cxx_destruct;
- (id)stringForContent:(id)arg1 unit:(id)arg2 isBigFont:(_Bool)arg3;
- (id)stringForTime:(double)arg1 isBigFont:(_Bool)arg2;
- (void)addLines;
- (void)awakeFromNib;

@end

