//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface URIUtil : NSObject
{
}

+ (id)getFileName:(id)arg1;
+ (id)dictionary2QueryString:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (_Bool)isValidURL:(id)arg1;
+ (id)getFixedString:(id)arg1;
+ (_Bool)isXProtocol:(id)arg1 protocol:(id)arg2;
+ (_Bool)isFileProtocol:(id)arg1;
+ (_Bool)isHttpsProtocol:(id)arg1;
+ (_Bool)isHttpProtocol:(id)arg1;
+ (id)getAllQueryParameters:(id)arg1;
+ (id)addParameterURL:(id)arg1 name:(id)arg2 Value:(id)arg3 isOverride:(_Bool)arg4;
+ (id)addParametersUrl:(id)arg1 paras:(id)arg2 isOverride:(_Bool)arg3;
+ (id)getBaseURL:(id)arg1;

@end

