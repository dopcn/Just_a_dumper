//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TTKDirectConnectSource, TTKDirectConnectTimeout, TTKDirectConnectUrl, TTKTrainURLConfig, TTKTrainURLModel;

@interface TTKTrainURLManager : NSObject
{
    _Bool _codeLogSwitch;
    TTKTrainURLConfig *_urlServerConfig;
    TTKDirectConnectUrl *_directConnectUrl;
    TTKDirectConnectSource *_directConnectSource;
    TTKDirectConnectTimeout *_directConnectTimeout;
    double _throttleTime;
    TTKTrainURLModel *_model;
    TTKTrainURLConfig *_defaultConfig;
}

+ (id)shareManager;
@property(retain, nonatomic) TTKTrainURLConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
@property(retain, nonatomic) TTKTrainURLModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool codeLogSwitch; // @synthesize codeLogSwitch=_codeLogSwitch;
@property(nonatomic) double throttleTime; // @synthesize throttleTime=_throttleTime;
@property(retain, nonatomic) TTKDirectConnectTimeout *directConnectTimeout; // @synthesize directConnectTimeout=_directConnectTimeout;
@property(retain, nonatomic) TTKDirectConnectSource *directConnectSource; // @synthesize directConnectSource=_directConnectSource;
@property(retain, nonatomic) TTKDirectConnectUrl *directConnectUrl; // @synthesize directConnectUrl=_directConnectUrl;
@property(retain, nonatomic) TTKTrainURLConfig *urlServerConfig; // @synthesize urlServerConfig=_urlServerConfig;
- (void).cxx_destruct;
@property(readonly, nonatomic) TTKTrainURLConfig *URLConfig;
- (void)checkUrlServerConfig;
- (void)fetchURLData;

@end

