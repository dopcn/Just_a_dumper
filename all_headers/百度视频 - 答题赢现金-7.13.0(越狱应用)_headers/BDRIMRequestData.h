//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BDRIMHTTPMultiDataStream, NSDictionary, NSMutableDictionary, NSString;

@interface BDRIMRequestData : NSObject
{
    NSMutableDictionary *_paramters;
    NSMutableDictionary *_httpHeaders;
    BDRIMHTTPMultiDataStream *_multiDataStream;
    unsigned long long _stringEncoding;
    NSString *_serverURL;
    NSString *_URIMethod;
    NSString *_boundary;
}

@property(retain) NSString *boundary; // @synthesize boundary=_boundary;
@property(readonly, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(retain, nonatomic) NSString *URIMethod; // @synthesize URIMethod=_URIMethod;
@property(retain, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)BDRIMn_errorWithCode:(int)arg1 message:(id)arg2;
- (void)removeHTTPHeaderForKey:(id)arg1;
- (id)paramterForKey:(id)arg1;
- (_Bool)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 headerParamters:(id)arg5 error:(id *)arg6;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 headerParamters:(id)arg5 error:(id *)arg6;
- (id)existMultiDataStream;
@property(readonly, nonatomic) BDRIMHTTPMultiDataStream *multiDataStream; // @synthesize multiDataStream=_multiDataStream;
- (void)setParametersInDictionary:(id)arg1;
- (void)setParamatersWithString:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setNumberParamter:(id)arg1 withKey:(id)arg2;
- (void)setParameter:(id)arg1 withKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *allParamters;
- (id)init;
- (void)__dataCommonInit;
- (void)loadDefaultHTTPHeaders;

@end

