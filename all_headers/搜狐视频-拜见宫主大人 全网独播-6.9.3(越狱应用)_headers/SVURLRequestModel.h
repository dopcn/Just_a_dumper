//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHTTPURLResponse, NSString, NSURLRequest;

@interface SVURLRequestModel : NSObject
{
    int _responseStatusCode;
    NSURLRequest *ne_request;
    NSHTTPURLResponse *ne_response;
    double _myID;
    NSString *_startDateString;
    NSString *_endDateString;
    NSString *_requestURLString;
    NSString *_requestCachePolicy;
    double _requestTimeoutInterval;
    NSString *_requestHTTPMethod;
    NSString *_requestAllHTTPHeaderFields;
    NSString *_requestHTTPBody;
    NSString *_responseMIMEType;
    NSString *_responseExpectedContentLength;
    NSString *_responseTextEncodingName;
    NSString *_responseSuggestedFilename;
    NSString *_responseAllHeaderFields;
    NSString *_receiveJSONData;
    NSString *_mapPath;
    NSString *_mapJSONData;
}

@property(retain, nonatomic) NSString *mapJSONData; // @synthesize mapJSONData=_mapJSONData;
@property(retain, nonatomic) NSString *mapPath; // @synthesize mapPath=_mapPath;
@property(retain, nonatomic) NSString *receiveJSONData; // @synthesize receiveJSONData=_receiveJSONData;
@property(retain, nonatomic) NSString *responseAllHeaderFields; // @synthesize responseAllHeaderFields=_responseAllHeaderFields;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSString *responseSuggestedFilename; // @synthesize responseSuggestedFilename=_responseSuggestedFilename;
@property(retain, nonatomic) NSString *responseTextEncodingName; // @synthesize responseTextEncodingName=_responseTextEncodingName;
@property(retain, nonatomic) NSString *responseExpectedContentLength; // @synthesize responseExpectedContentLength=_responseExpectedContentLength;
@property(retain, nonatomic) NSString *responseMIMEType; // @synthesize responseMIMEType=_responseMIMEType;
@property(retain, nonatomic) NSString *requestHTTPBody; // @synthesize requestHTTPBody=_requestHTTPBody;
@property(retain, nonatomic) NSString *requestAllHTTPHeaderFields; // @synthesize requestAllHTTPHeaderFields=_requestAllHTTPHeaderFields;
@property(retain, nonatomic) NSString *requestHTTPMethod; // @synthesize requestHTTPMethod=_requestHTTPMethod;
@property(nonatomic) double requestTimeoutInterval; // @synthesize requestTimeoutInterval=_requestTimeoutInterval;
@property(retain, nonatomic) NSString *requestCachePolicy; // @synthesize requestCachePolicy=_requestCachePolicy;
@property(retain, nonatomic) NSString *requestURLString; // @synthesize requestURLString=_requestURLString;
@property(retain, nonatomic) NSString *endDateString; // @synthesize endDateString=_endDateString;
@property(retain, nonatomic) NSString *startDateString; // @synthesize startDateString=_startDateString;
@property(nonatomic) double myID; // @synthesize myID=_myID;
@property(retain, nonatomic) NSHTTPURLResponse *ne_response; // @synthesize ne_response;
@property(retain, nonatomic) NSURLRequest *ne_request; // @synthesize ne_request;
- (void).cxx_destruct;

@end

