//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface LiveDecorateContentModel : NSObject
{
    _Bool _gif;
    _Bool _s34;
    _Bool _s169;
    float _scale;
    int _tier;
    int _layerCompositeMode;
    int _layerOpaqueness;
    NSString *_type;
    NSArray *_i;
    NSArray *_d;
    NSArray *_offset;
    NSString *_action;
    NSString *_sw;
    NSString *_sh;
    NSString *_gx;
    NSString *_gy;
    NSString *_zipName;
    NSArray *_gifOffset;
    NSArray *_s34Offset;
    NSArray *_descsFor3D;
    NSString *_subType;
    NSArray *_d2;
    NSArray *_s169Offset;
}

@property(copy, nonatomic) NSArray *s169Offset; // @synthesize s169Offset=_s169Offset;
@property(nonatomic) _Bool s169; // @synthesize s169=_s169;
@property(copy, nonatomic) NSArray *d2; // @synthesize d2=_d2;
@property(copy, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(copy, nonatomic) NSArray *descsFor3D; // @synthesize descsFor3D=_descsFor3D;
@property(copy, nonatomic) NSArray *s34Offset; // @synthesize s34Offset=_s34Offset;
@property(nonatomic) _Bool s34; // @synthesize s34=_s34;
@property(copy, nonatomic) NSArray *gifOffset; // @synthesize gifOffset=_gifOffset;
@property(nonatomic) _Bool gif; // @synthesize gif=_gif;
@property(nonatomic) int layerOpaqueness; // @synthesize layerOpaqueness=_layerOpaqueness;
@property(nonatomic) int layerCompositeMode; // @synthesize layerCompositeMode=_layerCompositeMode;
@property(nonatomic) int tier; // @synthesize tier=_tier;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *zipName; // @synthesize zipName=_zipName;
@property(copy, nonatomic) NSString *gy; // @synthesize gy=_gy;
@property(copy, nonatomic) NSString *gx; // @synthesize gx=_gx;
@property(copy, nonatomic) NSString *sh; // @synthesize sh=_sh;
@property(copy, nonatomic) NSString *sw; // @synthesize sw=_sw;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSArray *d; // @synthesize d=_d;
@property(copy, nonatomic) NSArray *i; // @synthesize i=_i;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

