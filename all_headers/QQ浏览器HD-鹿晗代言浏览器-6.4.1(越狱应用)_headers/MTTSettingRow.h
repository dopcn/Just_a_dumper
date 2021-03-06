//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface MTTSettingRow : NSObject
{
    _Bool _isOn;
    int _rowID;
    int _rowType;
    UIImage *_rowImage;
    NSString *_title;
    NSString *_subTitle;
    NSString *_explanation;
    double _titleFontSize;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(nonatomic) int rowType; // @synthesize rowType=_rowType;
@property(nonatomic) int rowID; // @synthesize rowID=_rowID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *rowImage; // @synthesize rowImage=_rowImage;
- (void).cxx_destruct;

@end

