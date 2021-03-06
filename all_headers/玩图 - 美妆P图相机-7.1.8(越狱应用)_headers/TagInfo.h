//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TResInfo.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface TagInfo : TResInfo <NSCopying, NSCoding>
{
    int _tagTypeId;
    NSMutableArray *_basicViewInfoArray;
    NSMutableArray *_outViewInfoArray;
    double _centerX;
    double _centerY;
    double _width;
    double _height;
    long long _labelNum;
    long long _oriention;
    NSString *_previewImg;
    long long _flag;
    NSString *_floderName;
}

@property(copy, nonatomic) NSString *floderName; // @synthesize floderName=_floderName;
@property(nonatomic) int tagTypeId; // @synthesize tagTypeId=_tagTypeId;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *previewImg; // @synthesize previewImg=_previewImg;
@property(nonatomic) long long oriention; // @synthesize oriention=_oriention;
@property(nonatomic) long long labelNum; // @synthesize labelNum=_labelNum;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(retain, nonatomic) NSMutableArray *outViewInfoArray; // @synthesize outViewInfoArray=_outViewInfoArray;
@property(retain, nonatomic) NSMutableArray *basicViewInfoArray; // @synthesize basicViewInfoArray=_basicViewInfoArray;
- (id)getIconImage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

