//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol QPlayAutoDelegate;

@interface QPlayAutoWrapper : NSObject
{
    struct QPlayAuto *pIOSQPlayAuto;
    struct QPlayAutoMsgHandler *qplayMsgHandler;
    struct QPlayAutoIOWifiCallback *qlayIOHandler;
    _Bool _isRuning;
    id <QPlayAutoDelegate> delegate;
}

@property(nonatomic) _Bool isRuning; // @synthesize isRuning=_isRuning;
@property __weak id <QPlayAutoDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)SendDisConnect;
- (_Bool)RequestPlayStop;
- (_Bool)RequestPlayPause;
- (_Bool)RequestPlayPlay;
- (_Bool)RequestPlayNext;
- (_Bool)RequestPlayPre;
- (void)SetNetworkState:(unsigned long long)arg1;
- (void)SetSearchSongItemsError:(long long)arg1;
- (void)SetSearchSongItems:(id)arg1 List:(id)arg2 IsFirstPage:(_Bool)arg3;
- (_Bool)SetLryicError:(long long)arg1;
- (void)SetLryic:(unsigned long long)arg1 SongType:(int)arg2 LyricType:(unsigned long long)arg3 PackageIndex:(int)arg4 TotalLength:(int)arg5 Data:(id)arg6;
- (_Bool)SetStopSendData:(unsigned long long)arg1 SongType:(int)arg2 DataType:(int)arg3 Result:(int)arg4;
- (void)SendErrorPCMData:(long long)arg1;
- (_Bool)SendPCMData:(unsigned long long)arg1 SongType:(int)arg2 PackageIndex:(int)arg3 TotalLength:(int)arg4 Data:(id)arg5;
- (_Bool)SetErrorMediaInfos:(long long)arg1;
- (_Bool)SetMediaInfos:(unsigned long long)arg1 SongType:(int)arg2 PCMDataLength:(long long)arg3 Rate:(int)arg4 Bits:(int)arg5 Channel:(int)arg6;
- (_Bool)SendPicDataError:(long long)arg1;
- (void)SendPicData:(unsigned long long)arg1 SongType:(int)arg2 PackageIndex:(int)arg3 TotalLength:(int)arg4 Data:(id)arg5;
- (void)SetSongItemsError:(long long)arg1;
- (void)SetSongItems:(id)arg1 List:(id)arg2 PageIndex:(long long)arg3 TotalCount:(long long)arg4;
- (_Bool)SetMobileDeviceInfos:(id)arg1 Models:(id)arg2 OS:(id)arg3 OSVer:(id)arg4 NetworkType:(unsigned long long)arg5 Ver:(id)arg6 APPVer:(id)arg7 Mac:(id)arg8;
- (id)RequestPlayState;
- (id)RequestStopSendData:(unsigned long long)arg1 SongType:(int)arg2 DataType:(int)arg3;
- (id)RequestDeviceInfos;
- (_Bool)IsValid;
- (_Bool)SendData:(id)arg1 Data:(id)arg2;
- (_Bool)SendResult:(id)arg1;
- (id)SendCommand:(id)arg1;
- (_Bool)StartWifiConnect:(id)arg1 DataPort:(int)arg2 CommandPort:(int)arg3 ResultPort:(int)arg4;
- (void)Stop;
- (_Bool)Start;
- (void)dealloc;
- (id)init;

@end

