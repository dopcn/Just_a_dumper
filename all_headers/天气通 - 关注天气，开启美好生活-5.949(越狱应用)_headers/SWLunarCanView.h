//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView;

@interface SWLunarCanView : UIView
{
    UIImage *_iconImge;
    NSString *_doStr;
    NSString *_nodoStr;
    NSString *_yearStr;
    NSString *_monthStr;
    NSString *_iconStr;
    UIImageView *_iconImgView;
}

+ (double)lunarViewHeight;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) NSString *iconStr; // @synthesize iconStr=_iconStr;
@property(retain, nonatomic) NSString *monthStr; // @synthesize monthStr=_monthStr;
@property(retain, nonatomic) NSString *yearStr; // @synthesize yearStr=_yearStr;
@property(retain, nonatomic) NSString *nodoStr; // @synthesize nodoStr=_nodoStr;
@property(retain, nonatomic) NSString *doStr; // @synthesize doStr=_doStr;
@property(retain, nonatomic) UIImage *iconImge; // @synthesize iconImge=_iconImge;
- (void).cxx_destruct;
- (struct CGSize)strSize:(id)arg1 att:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

