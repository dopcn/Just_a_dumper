//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMPOIExtOverlayModel.h"

@class NSMutableArray;

@interface BMPOIExtCoverOverlayModel : BMPOIExtOverlayModel
{
    _Bool _useCusColor;
    int _type;
    int _color;
    NSMutableArray *_path;
}

+ (id)parseCoverDataFromWinBound:(struct BMRect)arg1;
+ (id)parseCoverDataFromWinBound:(struct BMRect)arg1 useCusColor:(_Bool)arg2 cusColor:(int)arg3;
@property(retain, nonatomic) NSMutableArray *path; // @synthesize path=_path;
@property(nonatomic) _Bool useCusColor; // @synthesize useCusColor=_useCusColor;
@property(nonatomic) int color; // @synthesize color=_color;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)makeCVBundle:(void *)arg1;

@end

