//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMView.h"

@class NSString, UIImageView, ZDMCardHeaderView, ZDMClickImageView;

@interface ZDMView_kapian_4009 : ZDMView
{
    CDUnknownBlockType _operationClickBlock;
    NSString *_zdm_string_title;
    NSString *_zdm_string_urlImgL;
    NSString *_zdm_string_urlImgR;
    ZDMCardHeaderView *_zdm_headerView;
    ZDMClickImageView *_imageView_L;
    ZDMClickImageView *_imageView_R;
    UIImageView *_imageView_V;
}

@property(retain, nonatomic) UIImageView *imageView_V; // @synthesize imageView_V=_imageView_V;
@property(retain, nonatomic) ZDMClickImageView *imageView_R; // @synthesize imageView_R=_imageView_R;
@property(retain, nonatomic) ZDMClickImageView *imageView_L; // @synthesize imageView_L=_imageView_L;
@property(retain, nonatomic) ZDMCardHeaderView *zdm_headerView; // @synthesize zdm_headerView=_zdm_headerView;
@property(copy, nonatomic) NSString *zdm_string_urlImgR; // @synthesize zdm_string_urlImgR=_zdm_string_urlImgR;
@property(copy, nonatomic) NSString *zdm_string_urlImgL; // @synthesize zdm_string_urlImgL=_zdm_string_urlImgL;
@property(copy, nonatomic) NSString *zdm_string_title; // @synthesize zdm_string_title=_zdm_string_title;
@property(copy, nonatomic) CDUnknownBlockType operationClickBlock; // @synthesize operationClickBlock=_operationClickBlock;
- (void).cxx_destruct;
- (void)pushNextDetail:(long long)arg1 withValue:(id)arg2;
- (void)zdm_relayout;
- (id)zdm_clickImageView:(long long)arg1;
- (void)zdm_resize;
- (void)zdm_setupView;
- (void)layoutSubviews;
- (void)zdm_init;
- (void)dealloc;

@end

