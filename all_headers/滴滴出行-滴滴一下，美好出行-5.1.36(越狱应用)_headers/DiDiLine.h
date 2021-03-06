//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class DiPlaceInfo;

@interface DiDiLine : NSObject <NSCopying>
{
    _Bool _bPass;
    int _lineType;
    int _lineColor;
    DiPlaceInfo *_startPoint;
    DiPlaceInfo *_endPoint;
    double _lineWith;
}

+ (id)validLineArray:(id)arg1;
+ (id)ddLineWithBaseLine:(id)arg1;
@property(nonatomic) _Bool bPass; // @synthesize bPass=_bPass;
@property(nonatomic) double lineWith; // @synthesize lineWith=_lineWith;
@property(nonatomic) int lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) int lineType; // @synthesize lineType=_lineType;
@property(retain, nonatomic) DiPlaceInfo *endPoint; // @synthesize endPoint=_endPoint;
@property(retain, nonatomic) DiPlaceInfo *startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

