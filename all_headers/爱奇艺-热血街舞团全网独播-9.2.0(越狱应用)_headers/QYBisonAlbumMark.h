//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDataObject.h"

@class NSString;

@interface QYBisonAlbumMark : QYDataObject
{
    int _type;
    NSString *_n;
    NSString *_t;
    NSString *_img;
    NSString *_w;
    NSString *_h;
    NSString *_r_t;
    NSString *_t_color;
    NSString *_t_bg;
    NSString *_top_t;
}

@property(retain, nonatomic) NSString *top_t; // @synthesize top_t=_top_t;
@property(retain, nonatomic) NSString *t_bg; // @synthesize t_bg=_t_bg;
@property(retain, nonatomic) NSString *t_color; // @synthesize t_color=_t_color;
@property(retain, nonatomic) NSString *r_t; // @synthesize r_t=_r_t;
@property(copy, nonatomic) NSString *h; // @synthesize h=_h;
@property(copy, nonatomic) NSString *w; // @synthesize w=_w;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *t; // @synthesize t=_t;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *n; // @synthesize n=_n;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize)imgSize;
- (void)buildWithDictionary:(id)arg1;

@end

