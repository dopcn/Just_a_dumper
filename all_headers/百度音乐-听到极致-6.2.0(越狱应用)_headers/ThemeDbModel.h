//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSMutableDictionary, NSNumber, NSString;
@protocol Optional;

@interface ThemeDbModel : JSONModel
{
    NSString *_curThemeId;
    NSNumber<Optional> *_lastCheckVersionInterval;
    NSNumber<Optional> *_currentSkinCount;
    NSNumber<Optional> *_hasNewSkinFlag;
    NSMutableDictionary<Optional> *_downloadThemeDict;
}

@property(retain, nonatomic) NSMutableDictionary<Optional> *downloadThemeDict; // @synthesize downloadThemeDict=_downloadThemeDict;
@property(retain, nonatomic) NSNumber<Optional> *hasNewSkinFlag; // @synthesize hasNewSkinFlag=_hasNewSkinFlag;
@property(retain, nonatomic) NSNumber<Optional> *currentSkinCount; // @synthesize currentSkinCount=_currentSkinCount;
@property(retain, nonatomic) NSNumber<Optional> *lastCheckVersionInterval; // @synthesize lastCheckVersionInterval=_lastCheckVersionInterval;
@property(retain, nonatomic) NSString *curThemeId; // @synthesize curThemeId=_curThemeId;
- (void).cxx_destruct;

@end

