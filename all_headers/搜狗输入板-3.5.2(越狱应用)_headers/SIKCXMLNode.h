//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SIKCXMLNode : NSObject
{
    struct _xmlNode *_node;
}

+ (id)nodeWithLibXMLNode:(struct _xmlNode *)arg1;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (id)XMLStringWithOptions:(unsigned int)arg1;
- (id)_XMLStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)XMLString;
- (id)description;
- (id)nextSibling;
- (id)previousSibling;
- (id)childAtIndex:(unsigned int)arg1;
- (id)children;
- (unsigned int)childCount;
- (id)parent;
- (id)rootDocument;
- (unsigned int)level;
- (unsigned int)index;
- (id)stringValue;
- (id)name;
- (int)kind;
- (void)dealloc;
- (id)initWithLibXMLNode:(struct _xmlNode *)arg1;
- (id)nodesForXPath:(id)arg1 namespaceMappings:(id)arg2 error:(id *)arg3;

@end

