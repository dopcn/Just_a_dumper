//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSMutableArray, NSString;
@protocol NMZoomData;

@interface NMZoomGroupData : JSONModel
{
    NSString *_tagName;
    unsigned long long _type;
    NSMutableArray<NMZoomData> *_zoomDatas;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSMutableArray<NMZoomData> *zoomDatas; // @synthesize zoomDatas=_zoomDatas;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;

@end

