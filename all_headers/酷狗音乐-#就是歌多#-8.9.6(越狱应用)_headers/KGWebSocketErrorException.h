//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KGWebSocketErrorException : NSObject
{
    int _networkType;
    int _errorId;
    NSString *_userUid;
    long long _currentDate;
    NSString *_websocketURL;
    NSString *_errorDetail;
    long long _closeCode;
}

@property(nonatomic) int errorId; // @synthesize errorId=_errorId;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long closeCode; // @synthesize closeCode=_closeCode;
@property(copy, nonatomic) NSString *errorDetail; // @synthesize errorDetail=_errorDetail;
@property(copy, nonatomic) NSString *websocketURL; // @synthesize websocketURL=_websocketURL;
@property(nonatomic) long long currentDate; // @synthesize currentDate=_currentDate;
@property(copy, nonatomic) NSString *userUid; // @synthesize userUid=_userUid;
- (void).cxx_destruct;
- (id)init;

@end

