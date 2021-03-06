//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXMLParser.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface TTXMLParser : NSXMLParser <NSXMLParserDelegate>
{
    id _rootObject;
    _Bool _treatDuplicateKeysAsArrayItems;
    NSMutableArray *_objectStack;
}

@property(nonatomic) _Bool treatDuplicateKeysAsArrayItems; // @synthesize treatDuplicateKeysAsArrayItems=_treatDuplicateKeysAsArrayItems;
@property(readonly, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)didFinishParsingObject:(id)arg1;
- (void)addCharacters:(id)arg1 toObject:(id)arg2;
- (void)addChildObject:(id)arg1 toObject:(id)arg2;
- (id)allocObjectForElementName:(id)arg1 attributes:(id)arg2;
- (_Bool)parse;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

