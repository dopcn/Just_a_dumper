//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSXMLDictionaryParser;

@interface AWSXMLParser : NSObject
{
    AWSXMLDictionaryParser *_xmlDictionaryParser;
}

+ (id)parseMember:(id)arg1 rules:(id)arg2 error:(id *)arg3;
+ (id)parseList:(id)arg1 rules:(id)arg2 error:(id *)arg3;
+ (id)parseMap:(id)arg1 rules:(id)arg2 error:(id *)arg3;
+ (id)parseStructure:(id)arg1 rules:(id)arg2 error:(id *)arg3;
+ (_Bool)validateConstraint:(id)arg1 rules:(id)arg2 error:(id *)arg3;
+ (id)findKeyNameByXMLName:(id)arg1 rules:(id)arg2;
+ (id)preprocessDictionary:(id)arg1 operationName:(id)arg2 actionRule:(id)arg3 serviceDefinitionRule:(id)arg4;
+ (_Bool)failWithCode:(long long)arg1 description:(id)arg2 error:(id *)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) AWSXMLDictionaryParser *xmlDictionaryParser; // @synthesize xmlDictionaryParser=_xmlDictionaryParser;
- (void).cxx_destruct;
- (id)dictionaryForXMLData:(id)arg1 actionName:(id)arg2 serviceDefinitionRule:(id)arg3 error:(id *)arg4;
- (id)init;

@end

