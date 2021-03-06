//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSInputStream, NSOutputStream, PSProtocolInputModel;

@protocol PSProtocol <NSObject>
- (_Bool)realPingWithStream:(NSOutputStream *)arg1;
- (_Bool)readWithStream:(NSInputStream *)arg1 body:(PSProtocolInputModel *)arg2;
- (_Bool)write:(unsigned char)arg1 contentLength:(unsigned long long)arg2 keyLength:(unsigned long long)arg3 encrypt:(_Bool)arg4 content:(NSData *)arg5 keyContent:(NSData *)arg6 stream:(NSOutputStream *)arg7;
@end

