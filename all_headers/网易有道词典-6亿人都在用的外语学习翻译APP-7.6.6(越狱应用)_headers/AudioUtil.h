//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AudioUtil : NSObject
{
}

+ (int)AudioFormat2AudioFileType:(unsigned int)arg1;
+ (id)getCurrentAudioRouteType;
+ (id)getAudioFileDataFormat:(id)arg1;
+ (void)enableBluetooth;
+ (void)hasRecordGranted:(CDUnknownBlockType)arg1;
+ (_Bool)isUsingBluetooth;
+ (_Bool)hasHeadSet;
+ (_Bool)setAudioMode:(id)arg1;
+ (_Bool)setAudioCategory:(id)arg1;
+ (_Bool)setDefaultSpeakerMode:(_Bool)arg1;
+ (_Bool)switchToReceiverMode;
+ (_Bool)switchToSpeakerMode;

@end

