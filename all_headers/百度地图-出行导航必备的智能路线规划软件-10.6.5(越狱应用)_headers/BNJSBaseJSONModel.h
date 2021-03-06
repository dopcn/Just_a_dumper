//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSNumber, NSString;
@protocol Ignore, Optional;

@interface BNJSBaseJSONModel : JSONModel
{
    NSString<Optional> *_message;
    NSNumber<Optional> *_errorNumber;
    NSString<Optional> *_errmsg;
    NSNumber<Optional> *_timestamp;
    NSNumber<Optional> *_serverlogid;
    NSNumber<Ignore> *_requestRunloop;
    NSString<Ignore> *_requestPath;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Ignore> *requestPath; // @synthesize requestPath=_requestPath;
@property(copy, nonatomic) NSNumber<Ignore> *requestRunloop; // @synthesize requestRunloop=_requestRunloop;
@property(copy, nonatomic) NSNumber<Optional> *serverlogid; // @synthesize serverlogid=_serverlogid;
@property(copy, nonatomic) NSNumber<Optional> *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString<Optional> *errmsg; // @synthesize errmsg=_errmsg;
@property(copy, nonatomic) NSNumber<Optional> *errorNumber; // @synthesize errorNumber=_errorNumber;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (_Bool)isResponseSuccess;
- (id)init;

@end

